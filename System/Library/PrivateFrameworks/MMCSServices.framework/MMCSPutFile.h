/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MMCSServices/MMCSSimpleFile.h>

@class NSString, NSData;

@interface MMCSPutFile : MMCSSimpleFile {

	/*^block*/id _block;
	/*^block*/id _updateBlock;
	NSString* _protocolVersion;
	NSData* _authRequestData;
	/*^block*/id _registrationBlock;

}

@property (copy) NSString * protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (copy) NSData * authRequestData;                //@synthesize authRequestData=_authRequestData - In the implementation block
@property (copy) id completionBlock;                      //@synthesize block=_block - In the implementation block
@property (copy) id progressUpdateBlock;                  //@synthesize updateBlock=_updateBlock - In the implementation block
@property (copy) id registrationBlock;                    //@synthesize registrationBlock=_registrationBlock - In the implementation block
-(void)dealloc;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(void)setProgress:(double)arg1 ;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(NSString *)protocolVersion;
-(void)setRegistrationBlock:(id)arg1 ;
-(id)registrationBlock;
-(void)setAuthRequestData:(NSData *)arg1 ;
-(void)setProgressUpdateBlock:(id)arg1 ;
-(id)progressUpdateBlock;
-(NSData *)authRequestData;
@end

