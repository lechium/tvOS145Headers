//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AceObject, NSDictionary, NSError, NSString, SiriCoreAceConnectionAnalysisInfo, SiriCoreConnectionType;
@protocol SiriCoreSiriConnection;

@protocol SiriCoreSiriConnectionDelegate <NSObject>
- (void)siriConnection:(id <SiriCoreSiriConnection>)arg1 didEncounterIntermediateError:(NSError *)arg2;
- (void)siriConnection:(id <SiriCoreSiriConnection>)arg1 didEncounterError:(NSError *)arg2 analysisInfo:(SiriCoreAceConnectionAnalysisInfo *)arg3;
- (void)siriConnectionDidClose:(id <SiriCoreSiriConnection>)arg1;
- (void)siriConnection:(id <SiriCoreSiriConnection>)arg1 didReceiveAceObject:(AceObject *)arg2;
- (void)siriConnection:(id <SiriCoreSiriConnection>)arg1 didOpenWithConnectionType:(SiriCoreConnectionType *)arg2 routeId:(NSString *)arg3 delay:(double)arg4 method:(NSString *)arg5;
- (void)siriConnection:(id <SiriCoreSiriConnection>)arg1 willStartWithConnectionType:(SiriCoreConnectionType *)arg2;

@optional
- (void)siriConnection:(id <SiriCoreSiriConnection>)arg1 willStartConnectionWithHTTPHeaderFields:(NSDictionary *)arg2;
@end

