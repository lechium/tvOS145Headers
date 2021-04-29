//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ICQRemoteContext, NSDictionary, NSError, NSString, NSURLRequest;

@protocol INDaemonProtocol <NSObject>
- (void)renewCredentialsWithCompletion:(void (^)(long long, NSError *))arg1;
- (void)commonHeadersForRequest:(NSURLRequest *)arg1 withCompletion:(void (^)(NSDictionary *))arg2;
- (void)remoteFreshmintFlowCompletedWithSuccess:(_Bool)arg1 error:(NSError *)arg2;
- (void)presentHiddenFreshmintWithContext:(ICQRemoteContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)notifyDeviceStorageLevel:(long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)updateOfferForAccountWithID:(NSString *)arg1 offerId:(NSString *)arg2 buttonId:(NSString *)arg3 info:(NSDictionary *)arg4 completion:(void (^)(_Bool, NSError *))arg5;
- (void)iCloudServerOfferForAccountWithID:(NSString *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)diagnosticReportWithCompletion:(void (^)(INDiagnosticReport *, NSError *))arg1;
- (void)clearAllRegistrationDigestsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)unregisterAccountWithID:(NSString *)arg1 fromiCloudNotificationsWithCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)registerAccountWithID:(NSString *)arg1 foriCloudNotificationsWithReason:(unsigned long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end
