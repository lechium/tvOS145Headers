/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL;

@interface TIPersistentQueue : NSObject {

	NSURL* _presentedItemURL;

}
-(id)initWithURL:(id)arg1 ;
-(void)enqueueObjects:(/*^block*/id)arg1 ;
-(void)readObjects:(/*^block*/id)arg1 ;
-(void)dequeueObjects:(/*^block*/id)arg1 ;
@end

