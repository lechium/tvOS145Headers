/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray;

@interface SASymbol : NSObject {

	unsigned long long _offsetIntoSegment;
	unsigned long long _length;
	NSString* _name;
	NSMutableArray* _sourceInfos;

}

@property (readonly) unsigned long long offsetIntoSegment; 
@property (readonly) unsigned long long length; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long offsetIntoTextSegment; 
-(NSString *)name;
-(id)debugDescription;
-(unsigned long long)length;
-(unsigned long long)offsetIntoSegment;
-(unsigned long long)offsetIntoTextSegment;
@end
