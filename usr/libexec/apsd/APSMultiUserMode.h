//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface APSMultiUserMode : NSObject
{
    _Bool _isMultiUser;	// 8 = 0x8
    _Bool _isLoggedInUser;	// 9 = 0x9
}

+ (_Bool)_getIsCurrentlyLoggedIn;	// IMP=0x00000001000075cc
+ (_Bool)_getMultiUserMode;	// IMP=0x00000001000075c4
+ (id)sharedInstance;	// IMP=0x00000001000074cc
@property(readonly, nonatomic) _Bool isLoggedInUser; // @synthesize isLoggedInUser=_isLoggedInUser;
@property(readonly, nonatomic) _Bool isMultiUser; // @synthesize isMultiUser=_isMultiUser;
- (_Bool)isMultiAndLoggedIn;	// IMP=0x0000000100007624
- (id)initWithIsMultiUserMode:(_Bool)arg1 loggedInUser:(_Bool)arg2;	// IMP=0x00000001000075d4

@end
