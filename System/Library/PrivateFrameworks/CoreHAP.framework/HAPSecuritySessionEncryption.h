/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSMutableData;

@interface HAPSecuritySessionEncryption : NSObject {

	NSData* _inputKey;
	NSMutableData* _inputNonce;
	NSData* _outputKey;
	NSMutableData* _outputNonce;

}

@property (nonatomic,retain) NSData * inputKey;                        //@synthesize inputKey=_inputKey - In the implementation block
@property (nonatomic,retain) NSMutableData * inputNonce;               //@synthesize inputNonce=_inputNonce - In the implementation block
@property (nonatomic,retain) NSData * outputKey;                       //@synthesize outputKey=_outputKey - In the implementation block
@property (nonatomic,retain) NSMutableData * outputNonce;              //@synthesize outputNonce=_outputNonce - In the implementation block
-(id)init;
-(void)setInputKey:(NSData *)arg1 ;
-(void)setInputNonce:(NSMutableData *)arg1 ;
-(void)setOutputKey:(NSData *)arg1 ;
-(void)setOutputNonce:(NSMutableData *)arg1 ;
-(NSData *)inputKey;
-(NSMutableData *)inputNonce;
-(NSData *)outputKey;
-(NSMutableData *)outputNonce;
-(id)initWithInputKey:(id)arg1 outputKey:(id)arg2 ;
-(id)encrypt:(id)arg1 additionalAuthenticatedData:(id)arg2 ;
-(id)decrypt:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id*)arg3 ;
-(id)decrypt:(const void*)arg1 length:(unsigned long long)arg2 additionalAuthData:(const void*)arg3 additionalAuthDataLength:(unsigned long long)arg4 authTagData:(const void*)arg5 authTagDataLength:(unsigned long long)arg6 error:(id*)arg7 ;
@end

