//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "PBInstanceDependable-Protocol.h"
#import "PBPowerManagerObserver-Protocol.h"
#import "PBScreenSaverManagerObserver-Protocol.h"

@class CLLocationManager, GEOAlmanac, NSString;

@interface PBSystemAppearanceManager : NSObject <CLLocationManagerDelegate, PBScreenSaverManagerObserver, PBPowerManagerObserver, PBInstanceDependable>
{
    GEOAlmanac *_almanac;	// 8 = 0x8
    CLLocationManager *_locationManager;	// 16 = 0x10
    unsigned long long _locationFailureCount;	// 24 = 0x18
    struct CLLocationCoordinate2D _locationForDaylight;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010010defc
+ (id)dependencyDescription;	// IMP=0x000000010010dd3c
- (void).cxx_destruct;	// IMP=0x0000000100111270
@property(nonatomic) unsigned long long locationFailureCount; // @synthesize locationFailureCount=_locationFailureCount;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) struct CLLocationCoordinate2D locationForDaylight; // @synthesize locationForDaylight=_locationForDaylight;
@property(retain, nonatomic) GEOAlmanac *almanac; // @synthesize almanac=_almanac;
- (long long)_activeKioskUserInterfaceStyle;	// IMP=0x0000000100110e20
- (id)_defaultTransitionContext;	// IMP=0x0000000100110d14
- (void)_updateUserInterfaceStyleForScenesWithUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000100110928
- (long long)_systemAppearanceForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000001001108d8
- (long long)_userInterfaceStyleForSystemAppearance:(long long)arg1;	// IMP=0x0000000100110814
- (void)_updateSystemAppPermissionsToMatchTimeZone;	// IMP=0x0000000100110610
- (void)_updateLocationForDaylight:(id)arg1;	// IMP=0x0000000100110458
- (void)powerManager:(id)arg1 willWakeSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001103b8
- (void)_videoPlayerNowPlayingStateDidChange:(id)arg1;	// IMP=0x0000000100110130
- (void)screenSaverManagerWillDismissScreenSaver:(id)arg1;	// IMP=0x0000000100110060
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000010010ff04
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x000000010010fdd4
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x000000010010f8b4
- (void)_setInterfaceStyleToCurrentEffectiveValue;	// IMP=0x000000010010f844
- (long long)effectiveUserInterfaceStyleForBundleIdentifier:(id)arg1;	// IMP=0x000000010010f274
- (long long)effectiveUserInterfaceStyle;	// IMP=0x000000010010f22c
- (long long)reportingValueForCurrentSystemAppearance;	// IMP=0x000000010010f1a8
- (void)toggleSystemAppearance;	// IMP=0x000000010010f134
@property(readonly, nonatomic, getter=isLocationAvailable) _Bool locationAvailable;
@property(readonly, nonatomic) _Bool isDaylight;
- (void)_handleLocationFailure;	// IMP=0x000000010010ee10
- (void)updateAutomaticSystemAppearanceIfNeeded;	// IMP=0x000000010010ec6c
- (void)setSystemAppearance:(long long)arg1;	// IMP=0x000000010010e9d0
- (long long)systemAppearance;	// IMP=0x000000010010e970
- (void)setup;	// IMP=0x000000010010e4ec
- (void)dealloc;	// IMP=0x000000010010e450
- (id)init;	// IMP=0x000000010010dff8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

