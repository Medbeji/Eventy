#include <Uno-iOS/AppDelegate.h>
#include <Uno-iOS/Uno-iOS.h>


#include <Uno.Platform.CoreApp.h>
#include <Uno.Platform.iOS.Application.h>
#include <Uno.Platform.EventSources.InterAppInvoke.h>

@implementation uAppDelegate
- (id)init
{
    if ((self = [super init]))
    {
        _context = [[EAGLContext alloc] initWithAPI:kEAGLRenderingAPIOpenGLES2];
    }
    return self;
}

- (void)setView:(UIView *)view
{
    [super setView:view];
}

- (BOOL)application:(UIApplication *)application willFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [EAGLContext setCurrentContext:self.context];
    uAutoReleasePool pool;
    ::g::Uno::Platform::CoreApp::Start();
    return YES;
}

-(BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
    uAutoReleasePool pool;
    uString* unoUri = uPlatform::iOS::ToUno([url absoluteString]);
    ::g::Uno::Platform::EventSources::InterAppInvoke::OnReceivedURI(unoUri);
    ;
    return YES;
}

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary*)options {
    uAutoReleasePool pool;
    uString* unoUri = uPlatform::iOS::ToUno([url absoluteString]);
    ::g::Uno::Platform::EventSources::InterAppInvoke::OnReceivedURI(unoUri);
    ;
    return YES;
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    uAutoReleasePool pool;
    
    ::g::Uno::Platform::CoreApp::EnterForeground();
    return YES;
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    uAutoReleasePool pool;
    ::g::Uno::Platform::CoreApp::EnterForeground();
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    uAutoReleasePool pool;
    ::g::Uno::Platform::CoreApp::EnterInteractive();
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    uAutoReleasePool pool;
    ::g::Uno::Platform::CoreApp::ExitInteractive();
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    uAutoReleasePool pool;
    ::g::Uno::Platform::CoreApp::EnterBackground();
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    uAutoReleasePool pool;
    ::g::Uno::Platform::CoreApp::Terminate();
}

- (void)applicationDidReceiveMemoryWarning:(UIApplication *)application
{
    uAutoReleasePool pool;
    ::g::Uno::Platform::CoreApp::OnReceivedLowMemoryWarning();
}



@end
