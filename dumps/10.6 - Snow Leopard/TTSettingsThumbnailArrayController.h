/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSArrayController.h"

@class NSTableView, NSTimer;

@interface TTSettingsThumbnailArrayController : NSArrayController
{
    NSTableView *_tableView;
    NSTimer *_needsDisplayTimer;
    double _lastUpdateTime;
    BOOL _needsDelayedDisplay;
}

- (void)awakeFromNib;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setSelectedProfile:(id)arg1;
- (void)showSettingsPreferences:(id)arg1;
- (void)updateThumbnailForProfile:(id)arg1;
- (void)updateThumbnails;
- (void)thumbnailsDidChange;
- (void)delayedSetNeedsDisplay:(BOOL)arg1;
- (void)needsDisplayTimer:(id)arg1;
- (id)thumbnailOfSize:(struct CGSize)arg1 forProfile:(id)arg2;

@end

