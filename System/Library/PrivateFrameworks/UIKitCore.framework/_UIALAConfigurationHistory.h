/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILAConfigurationHistory.h>
#import <UIKitCore/_UIALAPropertySource.h>

@class NSSet, NSString;

@interface _UIALAConfigurationHistory : _UILAConfigurationHistory <_UIALAPropertySource> {

	BOOL _hasEstablishedAlignmentValues;
	BOOL _inAlignmentLayoutUpdateSection;
	unsigned long long _alignment;

}

@property (assign,nonatomic) BOOL hasEstablishedAlignmentValues;                                                       //@synthesize hasEstablishedAlignmentValues=_hasEstablishedAlignmentValues - In the implementation block
@property (assign,getter=isInAlignmentLayoutUpdateSection,nonatomic) BOOL inAlignmentLayoutUpdateSection;              //@synthesize inAlignmentLayoutUpdateSection=_inAlignmentLayoutUpdateSection - In the implementation block
@property (assign,nonatomic) unsigned long long alignment;                                                             //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) BOOL layoutFillsCanvas; 
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
@property (nonatomic,readonly) NSSet * invalidBaselineConstraints; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)alignment;
-(void)setAlignment:(unsigned long long)arg1 ;
-(void)setHasEstablishedAlignmentValues:(BOOL)arg1 ;
-(void)setInAlignmentLayoutUpdateSection:(BOOL)arg1 ;
-(BOOL)hasEstablishedAlignmentValues;
-(BOOL)isInAlignmentLayoutUpdateSection;
@end

