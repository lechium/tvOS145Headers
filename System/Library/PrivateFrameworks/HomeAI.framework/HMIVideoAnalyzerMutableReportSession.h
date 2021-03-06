/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray;

@interface HMIVideoAnalyzerMutableReportSession : HMFObject <NSSecureCoding> {

	NSString* _source;
	NSMutableArray* _fragments;

}

@property (retain) NSString * source;                         //@synthesize source=_source - In the implementation block
@property (readonly) NSMutableArray * fragments;              //@synthesize fragments=_fragments - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(id)attributeDescriptions;
-(NSMutableArray *)fragments;
-(void)appendFragmentResult:(id)arg1 ;
@end

