/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEIKEv2EncryptedPayload.h>

@interface NEIKEv2EncryptedFragmentPayload : NEIKEv2EncryptedPayload {

	unsigned _fragmentNumber;
	unsigned _totalFragments;
	unsigned long long _nextPayload;

}

@property (assign) unsigned fragmentNumber;                     //@synthesize fragmentNumber=_fragmentNumber - In the implementation block
@property (assign) unsigned totalFragments;                     //@synthesize totalFragments=_totalFragments - In the implementation block
@property (assign) unsigned long long nextPayload;              //@synthesize nextPayload=_nextPayload - In the implementation block
+(id)copyTypeDescription;
-(unsigned long long)type;
-(BOOL)hasRequiredFields;
-(BOOL)parsePayloadData;
-(unsigned)fragmentNumber;
-(unsigned)totalFragments;
-(void)setFragmentNumber:(unsigned)arg1 ;
-(void)setTotalFragments:(unsigned)arg1 ;
-(unsigned long long)nextPayload;
-(void)setNextPayload:(unsigned long long)arg1 ;
@end
