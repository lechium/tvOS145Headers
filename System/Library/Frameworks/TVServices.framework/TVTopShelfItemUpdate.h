/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TVTopShelfAction;

@interface TVTopShelfItemUpdate : NSObject <NSSecureCoding> {

	NSString* _itemIdentifier;
	TVTopShelfAction* _playAction;
	TVTopShelfAction* _displayAction;
	TVTopShelfAction* _addToLibraryAction;

}

@property (nonatomic,readonly) NSString * itemIdentifier;                        //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) TVTopShelfAction * playAction;                      //@synthesize playAction=_playAction - In the implementation block
@property (nonatomic,retain) TVTopShelfAction * displayAction;                   //@synthesize displayAction=_displayAction - In the implementation block
@property (nonatomic,retain) TVTopShelfAction * addToLibraryAction;              //@synthesize addToLibraryAction=_addToLibraryAction - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)itemIdentifier;
-(id)initWithItemIdentifier:(id)arg1 ;
-(TVTopShelfAction *)playAction;
-(void)setPlayAction:(TVTopShelfAction *)arg1 ;
-(TVTopShelfAction *)displayAction;
-(void)setDisplayAction:(TVTopShelfAction *)arg1 ;
-(TVTopShelfAction *)addToLibraryAction;
-(void)setAddToLibraryAction:(TVTopShelfAction *)arg1 ;
@end

