/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_data, MTLPipelineCache, MTLBinaryArchive;
@class MTLFunction, NSObject, NSArray, NSDictionary;

@interface MTLCompileFunctionRequestData : NSObject {

	BOOL _sync;
	MTLFunction* _function;
	unsigned long long _pipelineOptions;
	NSObject*<OS_dispatch_data> _frameworkData;
	NSObject*<OS_dispatch_data> _driverKeyData;
	id<MTLPipelineCache> _pipelineCache;
	id<MTLBinaryArchive> _destinationBinaryArchive;
	NSArray* _binaryArchives;
	NSArray* _visibleFunctions;
	NSArray* _privateVisibleFunctions;
	NSDictionary* _visibleFunctionGroups;

}

@property (assign,nonatomic) BOOL sync;                                                  //@synthesize sync=_sync - In the implementation block
@property (assign,nonatomic) unsigned long long pipelineOptions;                         //@synthesize pipelineOptions=_pipelineOptions - In the implementation block
@property (nonatomic,retain) MTLFunction * function;                                     //@synthesize function=_function - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_data> frameworkData; 
@property (assign,nonatomic) NSObject*<OS_dispatch_data> driverKeyData; 
@property (nonatomic,retain) id<MTLPipelineCache> pipelineCache;                         //@synthesize pipelineCache=_pipelineCache - In the implementation block
@property (nonatomic,retain) id<MTLBinaryArchive> destinationBinaryArchive;              //@synthesize destinationBinaryArchive=_destinationBinaryArchive - In the implementation block
@property (nonatomic,copy) NSArray * binaryArchives;                                     //@synthesize binaryArchives=_binaryArchives - In the implementation block
@property (nonatomic,copy) NSArray * visibleFunctions;                                   //@synthesize visibleFunctions=_visibleFunctions - In the implementation block
@property (nonatomic,copy) NSArray * privateVisibleFunctions;                            //@synthesize privateVisibleFunctions=_privateVisibleFunctions - In the implementation block
@property (nonatomic,copy) NSDictionary * visibleFunctionGroups;                         //@synthesize visibleFunctionGroups=_visibleFunctionGroups - In the implementation block
-(void)dealloc;
-(MTLFunction *)function;
-(BOOL)sync;
-(void)setSync:(BOOL)arg1 ;
-(NSArray *)binaryArchives;
-(void)setBinaryArchives:(NSArray *)arg1 ;
-(id<MTLPipelineCache>)pipelineCache;
-(NSObject*<OS_dispatch_data>)frameworkData;
-(void)setFrameworkData:(NSObject*<OS_dispatch_data>)arg1 ;
-(NSObject*<OS_dispatch_data>)driverKeyData;
-(void)setDriverKeyData:(NSObject*<OS_dispatch_data>)arg1 ;
-(void)setFunction:(MTLFunction *)arg1 ;
-(unsigned long long)pipelineOptions;
-(void)setPipelineOptions:(unsigned long long)arg1 ;
-(void)setPipelineCache:(id<MTLPipelineCache>)arg1 ;
-(id<MTLBinaryArchive>)destinationBinaryArchive;
-(void)setDestinationBinaryArchive:(id<MTLBinaryArchive>)arg1 ;
-(NSArray *)visibleFunctions;
-(void)setVisibleFunctions:(NSArray *)arg1 ;
-(NSArray *)privateVisibleFunctions;
-(void)setPrivateVisibleFunctions:(NSArray *)arg1 ;
-(NSDictionary *)visibleFunctionGroups;
-(void)setVisibleFunctionGroups:(NSDictionary *)arg1 ;
@end

