/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _PipelineLibrarySerializer : NSObject {

	void* _binarySerializer;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)addLibrary:(void*)arg1 ;
-(id)addSpecializedFunction:(id)arg1 descriptor:(const void*)arg2 ;
-(id)addRenderPipelineDescriptor:(const void*)arg1 ;
-(id)addComputePipelineDescriptor:(const void*)arg1 ;
-(unsigned long long)totalSize;
-(unsigned long long)writeToMemory:(char*)arg1 size:(unsigned long long)arg2 ;
@end

