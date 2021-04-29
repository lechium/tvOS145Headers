/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLDevice, OS_dispatch_queue, OS_dispatch_group, MTLLibrary;
#import <SceneKit/SceneKit-Structs.h>
@class SCNMTLLibrary, NSObject, NSDictionary, NSMapTable;

@interface SCNMTLLibraryManager : NSObject {

	id<MTLDevice> _device;
	SCNMTLLibrary* _frameworkLibrary;
	SCNMTLLibrary* _defaultLibrary;
	_C3DEngineStats* __engineStats;
	NSObject*<OS_dispatch_queue> _deviceQueue;
	NSObject*<OS_dispatch_group> _shaderCompilationGroup;
	id<MTLLibrary> _commonProfileCacheLibrary;
	NSDictionary* _commonProfilePrecompiledFunctions;
	NSMapTable* _availableLibraries;
	CFDictionaryRef _availableCompiledLibraries;
	os_unfair_lock_s _availableCompiledLibrariesLock;

}
+(id)hashCodeForSource:(id)arg1 macros:(id)arg2 ;
-(void)dealloc;
-(id)device;
-(id)initWithDevice:(id)arg1 ;
-(id)frameworkLibrary;
-(void)waitForShadersCompilation;
-(id)libraryForSourceCode:(id)arg1 options:(id)arg2 ;
-(void)_setEngineStats:(_C3DEngineStats*)arg1 ;
-(void)clearCompiledLibraries;
-(id)defaultLibrary;
-(id)commonProfileCacheLibrary;
-(id)shaderCompilationGroup;
-(id)deviceQueue;
-(id)libraryForFile:(id)arg1 ;
-(void)libraryForProgramDesc:(SCD_Struct_SC103*)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

