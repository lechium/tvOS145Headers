/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface AVKeyValueObserverCollection : NSObject {

	NSMutableDictionary* _keyObserverMap;
	id _rootObject;

}

@property (readonly) NSMutableDictionary * keyObserverMap;              //@synthesize keyObserverMap=_keyObserverMap - In the implementation block
@property (readonly) id rootObject;                                     //@synthesize rootObject=_rootObject - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)rootObject;
-(id)initWithObservedObject:(id)arg1 ;
-(void)startObservingKeyPath:(id)arg1 options:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)stopObservingKeyPath:(id)arg1 ;
-(void)startObservingKeyPath:(id)arg1 options:(unsigned long long)arg2 selector:(SEL)arg3 ;
-(void)bindKeyPath:(id)arg1 toKeyPath:(id)arg2 nilNumber:(id)arg3 ;
-(void)bindKeyPath:(id)arg1 toKeyPath:(id)arg2 ;
-(void)bindKeyPath:(id)arg1 toBoolKeyPath:(id)arg2 ;
-(NSMutableDictionary *)keyObserverMap;
@end

