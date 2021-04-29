//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class EvaluationRequest, NSData, NSDictionary;
@protocol LAOriginatorProt, LAUIDelegate;

@protocol LAContextServerEvaluationProt
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 originator:(id <LAOriginatorProt>)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)resetEvent:(long long)arg1 originator:(id <LAOriginatorProt>)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)retryEvent:(long long)arg1 originator:(id <LAOriginatorProt>)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)checkCredentialSatisfied:(long long)arg1 policy:(long long)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)credentialOfType:(long long)arg1 originator:(id <LAOriginatorProt>)arg2 reply:(void (^)(NSData *, NSError *))arg3;
- (void)setCredential:(NSData *)arg1 type:(long long)arg2 options:(NSDictionary *)arg3 originator:(id <LAOriginatorProt>)arg4 reply:(void (^)(_Bool, NSError *))arg5;
- (void)isCredentialSet:(long long)arg1 originator:(id <LAOriginatorProt>)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)evaluateACL:(NSData *)arg1 operation:(id)arg2 options:(NSDictionary *)arg3 uiDelegate:(id <LAUIDelegate>)arg4 originator:(id <LAOriginatorProt>)arg5 request:(EvaluationRequest *)arg6 reply:(void (^)(NSDictionary *, NSError *))arg7;
- (void)evaluatePolicy:(long long)arg1 options:(NSDictionary *)arg2 uiDelegate:(id <LAUIDelegate>)arg3 originator:(id <LAOriginatorProt>)arg4 request:(EvaluationRequest *)arg5 reply:(void (^)(NSDictionary *, NSError *))arg6;
@end

