/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class SBApplication;

@interface SBBackgroundContinuationPermissionAlertItem : SBUnknownSuperclass {
	SBApplication *_app;	// 16 = 0x10
}
- (id)initWithApplication:(id)application;	// 0x102f81
- (void)dealloc;	// 0x103295
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x103251
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;	// 0x102fd9
- (BOOL)shouldShowInLockScreen;	// 0x102f7d
@end
