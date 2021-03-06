/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFTrack.h>
@class NSString, NSURL, SFActionItem, NSDictionary, NSData;


@protocol SFTrack <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * number; 
@property (nonatomic,copy) NSString * duration; 
@property (assign,nonatomic) BOOL highlighted; 
@property (nonatomic,copy) NSURL * preview; 
@property (nonatomic,retain) SFActionItem * playAction; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)number;
-(void)setNumber:(id)arg1;
-(NSString *)duration;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(void)setDuration:(id)arg1;
-(BOOL)highlighted;
-(void)setHighlighted:(BOOL)arg1;
-(NSData *)jsonData;
-(SFActionItem *)playAction;
-(void)setPlayAction:(id)arg1;
-(NSURL *)preview;
-(void)setPreview:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, SFActionItem, NSDictionary, NSData;

@interface SFTrack : NSObject <SFTrack, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	BOOL _highlighted;
	NSString* _title;
	NSString* _number;
	NSString* _duration;
	NSURL* _preview;
	SFActionItem* _playAction;

}

@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * number;                                        //@synthesize number=_number - In the implementation block
@property (nonatomic,copy) NSString * duration;                                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                       //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,copy) NSURL * preview;                                          //@synthesize preview=_preview - In the implementation block
@property (nonatomic,retain) SFActionItem * playAction;                              //@synthesize playAction=_playAction - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)number;
-(void)setNumber:(NSString *)arg1 ;
-(NSString *)duration;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDuration:(NSString *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)highlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSData *)jsonData;
-(SFActionItem *)playAction;
-(void)setPlayAction:(SFActionItem *)arg1 ;
-(NSURL *)preview;
-(void)setPreview:(NSURL *)arg1 ;
-(BOOL)hasHighlighted;
@end

