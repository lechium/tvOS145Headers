/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PSIWordEmbeddingMatch : NSObject <NSSecureCoding> {

	NSString* _word;
	NSString* _extendedWord;
	double _score;

}

@property (readonly) NSString * word;                      //@synthesize word=_word - In the implementation block
@property (readonly) NSString * extendedWord;              //@synthesize extendedWord=_extendedWord - In the implementation block
@property (readonly) double score;                         //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)score;
-(NSString *)word;
-(NSString *)extendedWord;
-(id)initWithWord:(id)arg1 extendedWord:(id)arg2 score:(double)arg3 ;
@end

