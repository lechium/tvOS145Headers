//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSDictionary;

@protocol VCPHomeKitAnalysisSessionServerProtocol
- (void)processVideoFragmentAssetData:(NSData *)arg1 withOptions:(NSDictionary *)arg2 andReply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)processMessageWithOptions:(NSDictionary *)arg1 andReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)startSessionWithProperties:(NSDictionary *)arg1 andReply:(void (^)(NSError *))arg2;
@end

