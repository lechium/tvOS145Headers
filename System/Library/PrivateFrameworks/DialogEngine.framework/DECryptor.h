/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DialogEngine/DialogEngine-Structs.h>
#import <libobjc.A.dylib/DEWriter.h>

@protocol DEWriter;
@class NSObject;

@interface DECryptor : NSObject <DEWriter> {

	unsigned _operation;
	NSObject*<DEWriter> _writer;
	CCCryptorRef _cryptor;

}

@property (nonatomic,retain) NSObject*<DEWriter> writer;              //@synthesize writer=_writer - In the implementation block
@property (assign,nonatomic) CCCryptorRef cryptor;                    //@synthesize cryptor=_cryptor - In the implementation block
@property (assign,nonatomic) unsigned operation;                      //@synthesize operation=_operation - In the implementation block
-(id)init;
-(void)dealloc;
-(void)close;
-(unsigned)operation;
-(void)setOperation:(unsigned)arg1 ;
-(void)writeData:(id)arg1 ;
-(NSObject*<DEWriter>)writer;
-(void)setWriter:(NSObject*<DEWriter>)arg1 ;
-(CCCryptorRef)cryptor;
-(id)initWithWriter:(id)arg1 operation:(unsigned)arg2 key:(id)arg3 iv:(id)arg4 ;
-(void)setCryptor:(CCCryptorRef)arg1 ;
@end
