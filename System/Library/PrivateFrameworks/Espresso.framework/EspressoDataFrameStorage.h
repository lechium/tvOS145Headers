/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSMutableDictionary, NSString;

@interface EspressoDataFrameStorage : NSObject {

	NSMutableArray* _dataFrames;
	NSMutableDictionary* _mappedFiles;
	NSString* _baseFilename;

}

@property (retain) NSMutableArray * dataFrames;                    //@synthesize dataFrames=_dataFrames - In the implementation block
@property (retain) NSMutableDictionary * mappedFiles;              //@synthesize mappedFiles=_mappedFiles - In the implementation block
@property (retain) NSString * baseFilename;                        //@synthesize baseFilename=_baseFilename - In the implementation block
+(id)dataFrameStorageFromPath:(id)arg1 error:(id*)arg2 ;
-(void)setDataFrames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)dataFrames;
-(NSString *)baseFilename;
-(NSMutableDictionary *)mappedFiles;
-(unsigned long long)numberOfDataFrames;
-(id)dataFrameAtIndex:(unsigned long long)arg1 ;
-(void)setMappedFiles:(NSMutableDictionary *)arg1 ;
-(void)setBaseFilename:(NSString *)arg1 ;
@end

