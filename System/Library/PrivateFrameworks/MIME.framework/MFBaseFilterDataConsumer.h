/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFDataConsumer.h>

@class NSMutableArray, NSArray, NSString;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer> {

	NSMutableArray* _consumers;
	BOOL _serialAppend;

}

@property (assign,getter=isSerialAppend,nonatomic) BOOL serialAppend;              //@synthesize serialAppend=_serialAppend - In the implementation block
@property (nonatomic,readonly) NSArray * consumers;                                //@synthesize consumers=_consumers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)filterWithConsumers:(id)arg1 ;
+(id)filterWithConsumer:(id)arg1 ;
-(void)dealloc;
-(long long)appendData:(id)arg1 ;
-(void)done;
-(id)initWithConsumer:(id)arg1 ;
-(id)initWithConsumers:(id)arg1 ;
-(BOOL)isSerialAppend;
-(void)setSerialAppend:(BOOL)arg1 ;
-(NSArray *)consumers;
@end

