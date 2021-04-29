/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface GLKShadingHash : NSObject {

	NSObject*<OS_dispatch_queue> _vshQueue;
	NSObject*<OS_dispatch_queue> _fshQueue;
	NSMutableDictionary* _compiledVshs;
	NSMutableDictionary* _compiledFshs;

}
-(id)init;
-(void)dealloc;
-(void)purgeAllShaders;
-(id)compiledVshForKey:(id)arg1 ;
-(void)setCompiledVsh:(id)arg1 forKey:(id)arg2 ;
-(id)compiledFshForKey:(id)arg1 ;
-(void)setCompiledFsh:(id)arg1 forKey:(id)arg2 ;
@end

