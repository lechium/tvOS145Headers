/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKTableViewSettingsRow.h>

@class NSString;

@interface PKKeyValueTableViewSettingsRow : NSObject <PKTableViewSettingsRow> {

	NSString* _sectionID;
	BOOL _enabled;
	NSString* _title;
	id _value;
	/*^block*/id _changeHandler;

}

@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id value;                                     //@synthesize value=_value - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) id changeHandler;                             //@synthesize changeHandler=_changeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellReuseIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setEnabled:(BOOL)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(void)setChangeHandler:(id)arg1 ;
-(id)changeHandler;
-(BOOL)shouldHighlight;
-(id)initWithTitle:(id)arg1 value:(id)arg2 sectionID:(id)arg3 ;
-(id)tableViewCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithTitle:(id)arg1 value:(id)arg2 ;
@end

