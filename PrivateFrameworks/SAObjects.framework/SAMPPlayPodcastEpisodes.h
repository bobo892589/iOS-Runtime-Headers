/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPlayPodcastEpisodes : SADomainCommand

@property (nonatomic, copy) NSString *episodePlaybackOrder;
@property (nonatomic, retain) SAMPPodcast *podcast;

+ (id)playPodcastEpisodes;
+ (id)playPodcastEpisodesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)episodePlaybackOrder;
- (id)groupIdentifier;
- (id)podcast;
- (BOOL)requiresResponse;
- (void)setEpisodePlaybackOrder:(id)arg1;
- (void)setPodcast:(id)arg1;

@end
