//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCProfileConnectionObserver-Protocol.h"

@class NSString;
@protocol MSDProfilesManagerDelegate;

@interface MSDProfilesManager : NSObject <MCProfileConnectionObserver>
{
    id <MSDProfilesManagerDelegate> _delegate;	// 8 = 0x8
}

+ (id)fetchInstalledAgoraProfilesManagedDefaults;	// IMP=0x000000010001c398
- (void).cxx_destruct;	// IMP=0x000000010001c888
@property(nonatomic) __weak id <MSDProfilesManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010001c76c
- (void)syncStatusOfInstalledProfiles;	// IMP=0x000000010001c20c
- (void)dealloc;	// IMP=0x000000010001c194
- (id)init;	// IMP=0x000000010001c114

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

