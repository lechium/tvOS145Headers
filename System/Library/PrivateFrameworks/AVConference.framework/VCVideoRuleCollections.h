/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableArray, NSArray, NSDictionary;

@interface VCVideoRuleCollections : NSObject {

	NSMutableDictionary* _rules;
	NSMutableArray* _supportedPayloads;
	int _payload;
	unsigned char _transportType;
	unsigned char _encodingType;

}

@property (readonly) NSArray * supportedPayloads;              //@synthesize supportedPayloads=_supportedPayloads - In the implementation block
@property (readonly) NSDictionary * rules;                     //@synthesize rules=_rules - In the implementation block
+(id)newCorrectedVideoRules:(id)arg1 payload:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSDictionary *)rules;
-(NSArray *)supportedPayloads;
-(BOOL)isPayloadSupported:(int)arg1 ;
-(void)addSupportedPayload:(int)arg1 ;
-(void)addVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4 ;
-(id)getVideoRulesForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 ;
-(id)supportedVideoRulesForBitrate:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4 ;
-(void)appendVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4 ;
-(void)limitVideoRulesToMaxWidth:(int)arg1 maxHeight:(int)arg2 transportType:(unsigned char)arg3 ;
-(void)removeVideoRulesWithWidth:(int)arg1 height:(int)arg2 transportType:(unsigned char)arg3 encodingType:(unsigned char)arg4 ;
-(id)supportedVideoSizesForKey:(id)arg1 ;
-(id)filterRules:(id)arg1 byBitrateRule:(id)arg2 ;
-(id)supportedVideoRulesSyncForTransportType:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 ;
-(void)limitRulesFromVideoRules:(int)arg1 frameHeight:(int)arg2 videoRules:(id)arg3 ;
-(id)supportedVideoRulesSizesForBitrate:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4 ;
@end
