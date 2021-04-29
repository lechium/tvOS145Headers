//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface NotificationService : SQLiteEntity
{
}

+ (id)_propertySettersForPaymentTransaction;	// IMP=0x00000001000a5b18
+ (id)_predicateForNotificationServicePID:(id)arg1;	// IMP=0x00000001000a5af8
+ (id)_predicateForNoRegistrationURL;	// IMP=0x00000001000a5adc
+ (id)_predicateForRegistrationURL:(id)arg1;	// IMP=0x00000001000a5a74
+ (id)_predicateForServiceURL:(id)arg1;	// IMP=0x00000001000a5a0c
+ (id)_predicateForServiceType:(unsigned long long)arg1;	// IMP=0x00000001000a5998
+ (id)_predicateForPushTopic:(id)arg1;	// IMP=0x00000001000a5978
+ (id)_notificationServicesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00000001000a5764
+ (id)notificationServicesInDatabase:(id)arg1 withPushTopic:(id)arg2 serviceType:(unsigned long long)arg3 serviceURL:(id)arg4 registrationURL:(id)arg5;	// IMP=0x00000001000a5084
+ (id)notificationServicesInDatabase:(id)arg1 withPushTopic:(id)arg2;	// IMP=0x00000001000a4ff4
+ (id)notificationServicesInDatabase:(id)arg1;	// IMP=0x00000001000a4fe4
+ (id)anyInDatabase:(id)arg1 withPushTopic:(id)arg2 serviceType:(unsigned long long)arg3 serviceURL:(id)arg4 registrationURL:(id)arg5;	// IMP=0x00000001000a4dd8
+ (id)anyInDatabase:(id)arg1 withServiceURL:(id)arg2 registrationURL:(id)arg3;	// IMP=0x00000001000a4c60
+ (id)anyInDatabase:(id)arg1 withPushTopic:(id)arg2;	// IMP=0x00000001000a4bd0
+ (id)insertNotificationServiceWithPushTopic:(id)arg1 serviceType:(unsigned long long)arg2 serviceURL:(id)arg3 registrationURL:(id)arg4 deviceIdentifier:(id)arg5 inDatabase:(id)arg6;	// IMP=0x00000001000a4af0
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001000a4ab8
+ (id)databaseTable;	// IMP=0x00000001000a4aac
- (void)updateWithNotificationService:(id)arg1;	// IMP=0x00000001000a5574
- (void)updateWithLastUpdatedTag:(id)arg1;	// IMP=0x00000001000a54a0
- (void)updateWithLastUpdatedDate:(id)arg1;	// IMP=0x00000001000a5410
- (void)updateWithAppLaunchToken:(id)arg1;	// IMP=0x00000001000a53fc
- (void)updateWithAuthenticationToken:(id)arg1;	// IMP=0x00000001000a53e8
- (void)updateWithPushToken:(id)arg1;	// IMP=0x00000001000a53d4
- (id)notificationService;	// IMP=0x00000001000a5290
- (id)initWithPushTopic:(id)arg1 serviceType:(unsigned long long)arg2 serviceURL:(id)arg3 registrationURL:(id)arg4 deviceIdentifier:(id)arg5 inDatabase:(id)arg6;	// IMP=0x00000001000a48e8

@end
