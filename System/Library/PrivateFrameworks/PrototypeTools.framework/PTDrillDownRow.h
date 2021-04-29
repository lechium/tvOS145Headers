/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRow.h>

@class PTSettings, NSString;

@interface PTDrillDownRow : PTSRow {

	PTSettings* _childSettings;
	NSString* _childKeyPath;

}

@property (nonatomic,readonly) NSString * childKeyPath;              //@synthesize childKeyPath=_childKeyPath - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)rowWithTitle:(id)arg1 childSettingsKeyPath:(id)arg2 ;
+(id)rowWithTitleKeyPath:(id)arg1 childSettingsKeyPath:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(void)setSettings:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(id)initWithChildKeyPath:(id)arg1 ;
-(NSString *)childKeyPath;
@end

