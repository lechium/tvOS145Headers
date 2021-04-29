/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet;

@interface CTCallCenter : NSObject {

	NSSet* _currentCalls;
	/*^block*/id _callEventHandler;

}

@property (retain,readonly) NSSet * currentCalls;              //@synthesize currentCalls=_currentCalls - In the implementation block
@property (nonatomic,copy) id callEventHandler;                //@synthesize callEventHandler=_callEventHandler - In the implementation block
-(NSSet *)currentCalls;
-(id)callEventHandler;
-(void)setCallEventHandler:(id)arg1 ;
@end

