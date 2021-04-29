/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFStateDumpable.h>

@class NSDictionary;

@interface MediaFoundation.ItemBufferProducer : _UKNOWN_SUPERCLASS_ <MFStateDumpable> {

	 maximumBufferLength;
	 hasReachedQueueEnd;
	 consumer;
	 buffer;
	 dataSource;
	 reporter;
	 cursor;

}

@property (readonly,nonatomic) NSDictionary * stateDictionary; 
-(NSDictionary *)stateDictionary;
@end
