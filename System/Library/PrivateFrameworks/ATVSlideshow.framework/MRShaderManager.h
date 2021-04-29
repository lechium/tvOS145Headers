/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSLock;

@interface MRShaderManager : NSObject {

	NSMutableDictionary* mGLShadersPerContext;
	NSMutableDictionary* mShadersPerContext;
	NSMutableDictionary* mShaderDescriptions;
	NSLock* mGLShadersPerContextLock;
	NSLock* mShadersPerContextLock;

}
+(void)initialize;
+(id)sharedManager;
+(id)shaderKeyForShaderID:(id)arg1 andArguments:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(void)cleanup;
-(void)releaseResources;
-(id)shaderForShaderID:(id)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)registerShaderWithFragmentShaderSource:(id)arg1 andVertexShaderName:(id)arg2 forShaderID:(id)arg3 ;
-(void)registerVertexShaderWithVertexShaderSource:(id)arg1 forShaderID:(id)arg2 ;
-(void)forgetContext:(id)arg1 ;
-(unsigned)_glShaderForID:(id)arg1 inBaseContext:(id)arg2 isFragmentShader:(BOOL)arg3 withArguments:(id)arg4 ;
@end

