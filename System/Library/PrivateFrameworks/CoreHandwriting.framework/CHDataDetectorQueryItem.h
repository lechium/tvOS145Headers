/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSSet, DDScannerResult;

@interface CHDataDetectorQueryItem : NSObject {

	const CGPathRef _estimatedBaseline;
	NSSet* _strokeIdentifiers;
	DDScannerResult* _dataDetectorResult;

}

@property (nonatomic,copy,readonly) NSSet * strokeIdentifiers;                           //@synthesize strokeIdentifiers=_strokeIdentifiers - In the implementation block
@property (nonatomic,retain,readonly) DDScannerResult * dataDetectorResult;              //@synthesize dataDetectorResult=_dataDetectorResult - In the implementation block
@property (nonatomic,readonly) const CGPathRef estimatedBaseline;                        //@synthesize estimatedBaseline=_estimatedBaseline - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(DDScannerResult *)dataDetectorResult;
-(NSSet *)strokeIdentifiers;
-(id)initWithStrokeIdentifiers:(id)arg1 detectedResult:(id)arg2 estimatedBaseline:(CGPathRef)arg3 ;
-(BOOL)isEqualToDataDetectorQueryItem:(id)arg1 ;
-(const CGPathRef)estimatedBaseline;
@end

