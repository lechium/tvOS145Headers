/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _CDLocalContext <_CDContext>
@required
-(BOOL)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
-(BOOL)setObject:(id)arg1 forContextualKeyPath:(id)arg2;
-(BOOL)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2;
-(BOOL)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2;
-(BOOL)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3;
-(id)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2;

@end

