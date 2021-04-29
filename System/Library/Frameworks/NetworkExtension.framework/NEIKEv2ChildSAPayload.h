/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSArray;

@interface NEIKEv2ChildSAPayload : NEIKEv2Payload {

	BOOL _includeDHGroup;
	NSArray* _proposals;

}

@property (retain) NSArray * proposals;              //@synthesize proposals=_proposals - In the implementation block
@property (assign) BOOL includeDHGroup;              //@synthesize includeDHGroup=_includeDHGroup - In the implementation block
+(id)copyTypeDescription;
-(id)description;
-(unsigned long long)type;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)proposals;
-(void)setProposals:(NSArray *)arg1 ;
-(void)setIncludeDHGroup:(BOOL)arg1 ;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(BOOL)includeDHGroup;
@end
