/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMapTable;

@interface AVBehaviorStorage : NSObject {

	id _AVKitOwner;
	NSMapTable* _behaviorsAndBehaviorContexts;

}

@property (assign,nonatomic,__weak) id AVKitOwner;                                     //@synthesize AVKitOwner=_AVKitOwner - In the implementation block
@property (nonatomic,readonly) NSMapTable * behaviorsAndBehaviorContexts;              //@synthesize behaviorsAndBehaviorContexts=_behaviorsAndBehaviorContexts - In the implementation block
-(id)initWithAVKitOwner:(id)arg1 ;
-(id)behaviors;
-(void)addBehavior:(id)arg1 ;
-(void)removeBehavior:(id)arg1 ;
-(void)enumerateAllBehaviorsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateAllBehaviorsConformingToProtocol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)behaviorOfClass:(Class)arg1 ;
-(void)enumerateAllBehaviorContextsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateAllBehaviorContextsConformingToProtocol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateAllBehaviorContextsImplementingSelector:(SEL)arg1 forProtocol:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)behaviorContextOfClass:(Class)arg1 ;
-(id)AVKitOwner;
-(void)setAVKitOwner:(id)arg1 ;
-(NSMapTable *)behaviorsAndBehaviorContexts;
@end

