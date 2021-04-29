/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSDictionary;

@interface CHStrokeClassificationResult : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _textStrokeIdentifiers;
	NSDictionary* _strokeClassificationsByStrokeIdentifier;
	NSDictionary* _substrokesByStrokeIdentifier;
	NSSet* _nontextCandidates;

}

@property (nonatomic,copy,readonly) NSDictionary * strokeClassificationsByStrokeIdentifier;              //@synthesize strokeClassificationsByStrokeIdentifier=_strokeClassificationsByStrokeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * substrokesByStrokeIdentifier;                         //@synthesize substrokesByStrokeIdentifier=_substrokesByStrokeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * textStrokeIdentifiers; 
@property (nonatomic,copy,readonly) NSSet * nontextCandidates;                                           //@synthesize nontextCandidates=_nontextCandidates - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)strokeClassificationsByStrokeIdentifier;
-(NSDictionary *)substrokesByStrokeIdentifier;
-(NSSet *)textStrokeIdentifiers;
-(NSSet *)nontextCandidates;
-(id)initWithStrokeClassificationsByStrokeIdentifier:(id)arg1 substrokesByStrokeIdentifier:(id)arg2 nontextCandidates:(id)arg3 ;
-(BOOL)isEqualToStrokeClassificationResult:(id)arg1 ;
-(BOOL)isEquivalentToStrokeClassificationResult:(id)arg1 ;
@end
