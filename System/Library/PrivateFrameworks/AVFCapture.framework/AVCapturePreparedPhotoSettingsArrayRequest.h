/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface AVCapturePreparedPhotoSettingsArrayRequest : NSObject {

	unsigned long long _requestID;
	NSArray* _photoSettingsArray;
	/*^block*/id _completionHandler;
	BOOL _completed;

}

@property (readonly) unsigned long long requestID; 
@property (readonly) NSArray * photoSettingsArray; 
@property (readonly) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,getter=isCompleted,nonatomic) BOOL completed;              //@synthesize completed=_completed - In the implementation block
+(id)preparedPhotoSettingsArrayRequestWithArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompleted:(BOOL)arg1 ;
-(unsigned long long)requestID;
-(BOOL)isCompleted;
-(id)_initWithArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setRequestID:(unsigned long long)arg1 ;
-(NSArray *)photoSettingsArray;
@end

