/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CHQuery.h>

@class NSString, NSSet;

@interface CHTitleQuery : CHQuery {

	NSString* _transcribedTitle;
	NSSet* _titleStrokeIdentifiers;

}

@property (nonatomic,copy,readonly) NSString * transcribedTitle;                 //@synthesize transcribedTitle=_transcribedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSSet * titleStrokeIdentifiers;              //@synthesize titleStrokeIdentifiers=_titleStrokeIdentifiers - In the implementation block
-(void)dealloc;
-(id)debugName;
-(void)q_updateQueryResult;
-(id)initWithRecognitionSession:(id)arg1 ;
-(void)_setTranscribedTitle:(id)arg1 strokeIdentifiers:(id)arg2 ;
-(NSString *)transcribedTitle;
-(NSSet *)titleStrokeIdentifiers;
@end

