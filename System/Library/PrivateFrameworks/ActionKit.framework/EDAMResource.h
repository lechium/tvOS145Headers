/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSString, EDAMData, NSNumber, EDAMResourceAttributes;

@interface EDAMResource : FATObject {

	NSString* _guid;
	NSString* _noteGuid;
	EDAMData* _data;
	NSString* _mime;
	NSNumber* _width;
	NSNumber* _height;
	NSNumber* _duration;
	NSNumber* _active;
	EDAMData* _recognition;
	EDAMResourceAttributes* _attributes;
	NSNumber* _updateSequenceNum;
	EDAMData* _alternateData;

}

@property (nonatomic,retain) NSString * guid;                                  //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * noteGuid;                              //@synthesize noteGuid=_noteGuid - In the implementation block
@property (nonatomic,retain) EDAMData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * mime;                                  //@synthesize mime=_mime - In the implementation block
@property (nonatomic,retain) NSNumber * width;                                 //@synthesize width=_width - In the implementation block
@property (nonatomic,retain) NSNumber * height;                                //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSNumber * duration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSNumber * active;                                //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) EDAMData * recognition;                           //@synthesize recognition=_recognition - In the implementation block
@property (nonatomic,retain) EDAMResourceAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSNumber * updateSequenceNum;                     //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) EDAMData * alternateData;                         //@synthesize alternateData=_alternateData - In the implementation block
+(id)structName;
+(id)structFields;
-(EDAMData *)data;
-(EDAMResourceAttributes *)attributes;
-(void)setData:(EDAMData *)arg1 ;
-(NSNumber *)duration;
-(void)setAttributes:(EDAMResourceAttributes *)arg1 ;
-(NSNumber *)width;
-(NSNumber *)height;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)setHeight:(NSNumber *)arg1 ;
-(NSNumber *)active;
-(void)setDuration:(NSNumber *)arg1 ;
-(void)setActive:(NSNumber *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(EDAMData *)recognition;
-(void)setRecognition:(EDAMData *)arg1 ;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
-(NSString *)noteGuid;
-(void)setNoteGuid:(NSString *)arg1 ;
-(NSString *)mime;
-(void)setMime:(NSString *)arg1 ;
-(EDAMData *)alternateData;
-(void)setAlternateData:(EDAMData *)arg1 ;
@end

