/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/IOSurface.framework/IOSurface
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IOSurface/IOSurface-Structs.h>
@class IOSurfaceRemotePerSurfaceGlobalState;

@interface IOSurfaceRemotePerSurfacePerClientState : NSObject {

	IOSurfaceClientRef _surface;
	unsigned _refcount;
	IOSurfaceRemotePerSurfaceGlobalState* _globalState;

}

@property (nonatomic,retain) IOSurfaceRemotePerSurfaceGlobalState * globalState;              //@synthesize globalState=_globalState - In the implementation block
@property (nonatomic,readonly) IOSurfaceClientRef surface; 
@property (nonatomic,readonly) unsigned debugRefCount; 
-(void)dealloc;
-(id)mergeExtraData:(id)arg1 ;
-(void)setGlobalState:(IOSurfaceRemotePerSurfaceGlobalState *)arg1 ;
-(IOSurfaceRemotePerSurfaceGlobalState *)globalState;
-(BOOL)removeClientReferenceToSurface;
-(id)initWithSurface:(IOSurfaceClientRef)arg1 mappedAddress:(void*)arg2 mappedSize:(unsigned long long)arg3 extraData:(id)arg4 ;
-(IOSurfaceClientRef)surface;
-(unsigned)debugRefCount;
-(void)addClientReferenceToSurfaceWithExtraData:(id)arg1 ;
@end

