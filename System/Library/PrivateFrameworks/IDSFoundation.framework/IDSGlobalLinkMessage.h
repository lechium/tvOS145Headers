/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSData;

@interface IDSGlobalLinkMessage : NSObject {

	long long _command;
	NSData* _hmacKeyData;
	IDSGlobalLinkAttribute _attributes[20];
	int _numAttribute;

}

@property (nonatomic,readonly) long long command;              //@synthesize command=_command - In the implementation block
@property (readonly) NSData * hmacKeyData;                     //@synthesize hmacKeyData=_hmacKeyData - In the implementation block
+(id)messageWithCommand:(long long)arg1 attributes:(id)arg2 ;
+(id)messageWithBuffer:(char*)arg1 length:(int)arg2 ;
-(void)dealloc;
-(void)setAttributes:(id)arg1 ;
-(long long)command;
-(BOOL)getAttribute:(long long)arg1 attribute:(IDSGlobalLinkAttribute*)arg2 ;
-(BOOL)write:(char*)arg1 outputLength:(int*)arg2 ;
-(BOOL)verifyHMacDigestWithKey:(id)arg1 inputBuffer:(char*)arg2 inputLength:(int)arg3 ;
-(id)initWithCommand:(long long)arg1 ;
-(BOOL)read:(char*)arg1 inputLength:(int)arg2 ;
-(BOOL)_addAttribute:(IDSGlobalLinkAttribute*)arg1 ;
-(void)_addUInt16Attribute:(long long)arg1 value:(unsigned short)arg2 ;
-(void)_addBinaryDataAttribute:(long long)arg1 value:(id)arg2 ;
-(void)_addUInt32Attribute:(long long)arg1 value:(unsigned)arg2 ;
-(void)_addAddressAttribute:(long long)arg1 value:(sockaddr*)arg2 ;
-(void)_addUInt64Attribute:(long long)arg1 value:(unsigned long long)arg2 ;
-(NSData *)hmacKeyData;
@end

