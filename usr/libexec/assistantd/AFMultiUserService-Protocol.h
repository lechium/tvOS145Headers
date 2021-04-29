//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol AFMultiUserService <NSObject>
- (oneway void)getPreferredMediaUserHomeUserIDWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (oneway void)getHomeUserIdOfRecognizedUserWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (oneway void)getMultiUserSettingsForSharedUserID:(NSString *)arg1 completion:(void (^)(AFPersonalUserSettings *, NSError *))arg2;
- (oneway void)getConformingSharedUserIds:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)getFirstNameForSharedUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)getConformingSharedUserIdForHomeUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSString *, NSError *))arg2;
- (oneway void)getSharedUserIdForHomeUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)getHomeUserIdForSharedUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
@end

