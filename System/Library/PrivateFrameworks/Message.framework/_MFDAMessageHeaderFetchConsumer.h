/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFDASyncResponseConsumer.h>

@class MFError, NSData, MFDAMessageStore;

@interface _MFDAMessageHeaderFetchConsumer : NSObject <MFDASyncResponseConsumer> {

	BOOL _succeeded;
	MFError* _error;
	NSData* _data;
	MFDAMessageStore* _store;

}

@property (nonatomic,readonly) BOOL succeeded;                      //@synthesize succeeded=_succeeded - In the implementation block
@property (nonatomic,retain) MFError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) MFDAMessageStore * store;              //@synthesize store=_store - In the implementation block
-(void)dealloc;
-(NSData *)data;
-(MFError *)error;
-(void)setError:(MFError *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(void)setStore:(MFDAMessageStore *)arg1 ;
-(MFDAMessageStore *)store;
-(BOOL)succeeded;
-(void)handleResponse:(id)arg1 error:(id)arg2 ;
-(BOOL)wantsData;
@end

