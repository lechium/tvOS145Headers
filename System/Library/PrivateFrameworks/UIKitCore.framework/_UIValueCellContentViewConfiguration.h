/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIContentViewConfiguration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _UIContentViewImageViewConfiguration, _UIContentViewLabelConfiguration, NSString;

@interface _UIValueCellContentViewConfiguration : NSObject <_UIContentViewConfiguration, NSSecureCoding> {

	struct {
		unsigned hasCustomizedAxesPreservingSuperviewLayoutMargins : 1;
		unsigned hasCustomizedDirectionalLayoutMargins : 1;
		unsigned hasCustomizedImageToTextPadding : 1;
		unsigned hasCustomizedTextToValuePadding : 1;
	}  _configurationFlags;
	unsigned long long _axesPreservingSuperviewLayoutMargins;
	double _imageToTextPadding;
	long long _defaultStyle;
	_UIContentViewImageViewConfiguration* _imageView;
	_UIContentViewLabelConfiguration* _textLabel;
	_UIContentViewLabelConfiguration* _valueLabel;
	UIOffset _textToValuePadding;
	NSDirectionalEdgeInsets _directionalLayoutMargins;

}

@property (assign,setter=_setAxesPreservingSuperviewLayoutMargins:,nonatomic) unsigned long long _axesPreservingSuperviewLayoutMargins;              //@synthesize axesPreservingSuperviewLayoutMargins=_axesPreservingSuperviewLayoutMargins - In the implementation block
@property (assign,setter=_setDirectionalLayoutMargins:,nonatomic) NSDirectionalEdgeInsets _directionalLayoutMargins;                                 //@synthesize directionalLayoutMargins=_directionalLayoutMargins - In the implementation block
@property (assign,setter=_setImageToTextPadding:,nonatomic) double _imageToTextPadding;                                                              //@synthesize imageToTextPadding=_imageToTextPadding - In the implementation block
@property (assign,setter=_setTextToValuePadding:,nonatomic) UIOffset _textToValuePadding;                                                            //@synthesize textToValuePadding=_textToValuePadding - In the implementation block
@property (assign,nonatomic) long long _defaultStyle;                                                                                                //@synthesize defaultStyle=_defaultStyle - In the implementation block
@property (nonatomic,readonly) BOOL _isSidebarStyle; 
@property (nonatomic,readonly) _UIContentViewImageViewConfiguration * imageView;                                                                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) _UIContentViewLabelConfiguration * textLabel;                                                                         //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) _UIContentViewLabelConfiguration * valueLabel;                                                                        //@synthesize valueLabel=_valueLabel - In the implementation block
@property (assign,nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins; 
@property (assign,nonatomic) NSDirectionalEdgeInsets directionalLayoutMargins; 
@property (assign,nonatomic) double imageToTextPadding; 
@property (assign,nonatomic) UIOffset textToValuePadding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
+(id)defaultOutlineCellConfigurationForState:(unsigned long long)arg1 ;
+(id)defaultListCellConfigurationForState:(unsigned long long)arg1 ;
+(id)_defaultConfigurationForStyle:(long long)arg1 state:(unsigned long long)arg2 traitCollection:(id)arg3 ;
+(id)defaultListCellConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2 ;
+(id)defaultOutlineCellConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2 ;
+(id)listCellConfiguration;
+(id)outlineCellConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_UIContentViewImageViewConfiguration *)imageView;
-(_UIContentViewLabelConfiguration *)textLabel;
-(_UIContentViewLabelConfiguration *)valueLabel;
-(NSDirectionalEdgeInsets)directionalLayoutMargins;
-(void)setDirectionalLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(id)updatedConfigurationForState:(unsigned long long)arg1 ;
-(unsigned long long)axesPreservingSuperviewLayoutMargins;
-(void)setAxesPreservingSuperviewLayoutMargins:(unsigned long long)arg1 ;
-(double)imageToTextPadding;
-(void)setImageToTextPadding:(double)arg1 ;
-(void)set_defaultStyle:(long long)arg1 ;
-(long long)_defaultStyle;
-(id)updatedConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2 ;
-(unsigned long long)_axesPreservingSuperviewLayoutMargins;
-(void)_setAxesPreservingSuperviewLayoutMargins:(unsigned long long)arg1 ;
-(NSDirectionalEdgeInsets)_directionalLayoutMargins;
-(void)_setDirectionalLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(BOOL)_isEqualToConfiguration:(id)arg1 ;
-(BOOL)_isEqualToConfigurationQuick:(id)arg1 ;
-(id)createContentView;
-(void)applyToContentView:(id)arg1 ;
-(void)_setImageToTextPadding:(double)arg1 ;
-(double)_imageToTextPadding;
-(BOOL)_isSidebarStyle;
-(id)_initWithImageView:(id)arg1 textLabel:(id)arg2 valueLabel:(id)arg3 directionalLayoutMargins:(NSDirectionalEdgeInsets)arg4 imageToTextPadding:(double)arg5 textToValuePadding:(double)arg6 ;
-(UIOffset)_textToValuePadding;
-(void)_setTextToValuePadding:(UIOffset)arg1 ;
-(void)setTextToValuePadding:(UIOffset)arg1 ;
-(UIOffset)textToValuePadding;
@end

