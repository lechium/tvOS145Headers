/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGTitleSpecArgument.h>

@interface PGTitleSpecPublicEventArgument : PGTitleSpecArgument {

	BOOL _shouldUseLongPublicEventTitle;
	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseLongPublicEventTitle;              //@synthesize shouldUseLongPublicEventTitle=_shouldUseLongPublicEventTitle - In the implementation block
+(id)_cleanUpEventName:(id)arg1 ;
+(id)argumentWithPublicEventType:(unsigned long long)arg1 ;
+(id)argumentWithPublicEventType:(unsigned long long)arg1 shouldUseLongPublicEventTitle:(BOOL)arg2 ;
-(unsigned long long)type;
-(id)_resolvedStringWithMomentNodes:(id)arg1 ;
-(id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 ;
-(id)initWithPublicEventType:(unsigned long long)arg1 ;
-(id)initWithPublicEventType:(unsigned long long)arg1 shouldUseLongPublicEventTitle:(BOOL)arg2 ;
-(id)_resolvedStringWithPublicEventNode:(id)arg1 inMomentNodes:(id)arg2 ;
-(id)_commonPublicEventNodeForMomentNodes:(id)arg1 ;
-(id)_generateTitleWithEventNameForPublicEventNode:(id)arg1 ;
-(id)_generateTitleWithBusinessNameForPublicEventNode:(id)arg1 ;
-(id)_generateTitleWithPerformerNamesForPublicEventNode:(id)arg1 ;
-(id)_generateTitleWithCategoryNameForPublicEventNode:(id)arg1 ;
-(BOOL)shouldUseLongPublicEventTitle;
@end

