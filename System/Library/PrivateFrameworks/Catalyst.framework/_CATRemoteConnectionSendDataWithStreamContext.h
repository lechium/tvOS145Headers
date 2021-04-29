/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_CATRemoteConnectionSendContext.h>

@class NSMutableData, NSData, NSInputStream, NSString;

@interface _CATRemoteConnectionSendDataWithStreamContext : NSObject <_CATRemoteConnectionSendContext> {

	NSMutableData* mBuffer;
	NSData* mHeaderData;
	unsigned long long mBytesRead;
	NSInputStream* _stream;
	unsigned long long _dataLength;
	unsigned long long _bufferSize;
	id _userInfo;
	unsigned long long _bytesWritten;

}

@property (nonatomic,copy,readonly) NSInputStream * stream;                        //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) unsigned long long dataLength;                      //@synthesize dataLength=_dataLength - In the implementation block
@property (nonatomic,readonly) unsigned long long bufferSize;                      //@synthesize bufferSize=_bufferSize - In the implementation block
@property (nonatomic,readonly) id userInfo;                                        //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasBytesRemaining; 
@property (assign,nonatomic) unsigned long long bytesWritten;                      //@synthesize bytesWritten=_bytesWritten - In the implementation block
@property (nonatomic,readonly) unsigned long long clientBytesWritten; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)userInfo;
-(NSInputStream *)stream;
-(unsigned long long)bytesWritten;
-(void)setBytesWritten:(unsigned long long)arg1 ;
-(unsigned long long)bufferSize;
-(unsigned long long)dataLength;
-(id)initWithStream:(id)arg1 length:(unsigned long long)arg2 bufferSize:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(BOOL)hasBytesRemaining;
-(id)bufferedDataWithError:(id*)arg1 ;
-(unsigned long long)clientBytesWritten;
@end

