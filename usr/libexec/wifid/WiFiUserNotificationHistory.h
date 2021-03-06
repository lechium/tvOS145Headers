//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WiFiUserNotificationHistory : NSObject
{
    double _recommendationDistanceThreshold;	// 8 = 0x8
    long long _maxSystemCancellationAttempts;	// 16 = 0x10
    NSMutableDictionary *_notifications;	// 24 = 0x18
    NSString *_lastRecommendedSSID;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *lastRecommendedSSID; // @synthesize lastRecommendedSSID=_lastRecommendedSSID;
@property(retain, nonatomic) NSMutableDictionary *notifications; // @synthesize notifications=_notifications;
@property(nonatomic) long long maxSystemCancellationAttempts; // @synthesize maxSystemCancellationAttempts=_maxSystemCancellationAttempts;
@property(nonatomic) double recommendationDistanceThreshold; // @synthesize recommendationDistanceThreshold=_recommendationDistanceThreshold;
- (void)reset;	// IMP=0x00000001000863c0
- (void)resetAttemptsForSSID:(id)arg1;	// IMP=0x0000000100086210
- (int)canPresentRecommendationForSSID:(id)arg1 currentLocation:(id)arg2;	// IMP=0x0000000100085dc4
- (void)handleNotificationResponseForSSID:(id)arg1 type:(int)arg2 response:(int)arg3;	// IMP=0x0000000100085b5c
- (void)presentedNotificationForSSID:(id)arg1 type:(int)arg2 currentLocation:(id)arg3;	// IMP=0x00000001000859f8
- (void)dealloc;	// IMP=0x00000001000859a8
- (id)init;	// IMP=0x0000000100085944

@end

