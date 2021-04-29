/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MDLMeshBufferMap;

@interface MDLVertexAttributeData : NSObject {

	MDLMeshBufferMap* _map;
	void* _dataStart;
	unsigned long long _stride;
	unsigned long long _format;
	unsigned long long _bufferSize;

}

@property (nonatomic,retain) MDLMeshBufferMap * map; 
@property (assign,nonatomic) void* dataStart; 
@property (assign,nonatomic) unsigned long long stride; 
@property (assign,nonatomic) unsigned long long format; 
@property (assign,nonatomic) unsigned long long bufferSize;              //@synthesize bufferSize=_bufferSize - In the implementation block
-(id)init;
-(MDLMeshBufferMap *)map;
-(unsigned long long)stride;
-(void)setStride:(unsigned long long)arg1 ;
-(unsigned long long)format;
-(void)setFormat:(unsigned long long)arg1 ;
-(void*)dataStart;
-(unsigned long long)bufferSize;
-(void)setMap:(MDLMeshBufferMap *)arg1 ;
-(void)setDataStart:(void*)arg1 ;
-(void)setbufferSize:(unsigned long long)arg1 ;
-(void)setBufferSize:(unsigned long long)arg1 ;
@end
