/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface MFDataHolder : NSObject {

	NSMutableArray* _datas;
	unsigned long long _length;

}

@property (nonatomic,readonly) unsigned long long length;              //@synthesize length=_length - In the implementation block
+(id)dataHolderWithData:(id)arg1 ;
+(id)dataHolder;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)addData:(id)arg1 ;
-(void)enumerateConvertingNewlinesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateDatasUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfNewlinesNeedingConversion:(BOOL)arg1 ;
@end

